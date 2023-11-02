
@interface TIDynamicLanguageLikelihoodModel : NSObject <TILanguageLikelihoodModeling> {
    NSLinguisticTagger * _linguisticTagger;
    struct map<std::string, long, std::less<std::string>, std::allocator<std::pair<const std::string, long>>> { 
        struct __tree<std::__value_type<std::string, long>, std::__map_value_compare<std::string, std::__value_type<std::string, long>, std::less<std::string>>, std::allocator<std::__value_type<std::string, long>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, long>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, long>, std::less<std::string>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  m_counts_for_language;
    long long  m_total_counts;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSLinguisticTagger *linguisticTagger;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (float)_priorProbabilityForLanguage:(const void*)arg1;
- (void)addEvidence:(id)arg1 forRecipient:(id)arg2 language:(id)arg3;
- (void)addEvidence:(id)arg1 timestamp:(double)arg2 adaptationType:(int)arg3 forRecipient:(id)arg4 app:(id)arg5 language:(id)arg6;
- (unsigned long long)emojiUsageCountForApp:(id)arg1 lastEmojiCountUpdateTime:(double*)arg2;
- (id)init;
- (double)lastOfflineAdaptationTimeForApp:(id)arg1;
- (id)linguisticTagger;
- (void)priorProbabilityForLanguages:(id)arg1 recipient:(id)arg2 handler:(id /* block */)arg3;
- (id)rankedLanguagesForRecipient:(id)arg1;

@end
