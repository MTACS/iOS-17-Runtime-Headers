
@interface CHCharacterSetRules : NSObject {
    NSCharacterSet * _CJKPairedPunctuationsCharSet;
    NSObject<OS_dispatch_queue> * __charSetRulesQueue;
    NSCharacterSet * _alphaNumericCharSet;
    NSCharacterSet * _arithmeticOperatorCharSet;
    NSCharacterSet * _commonJapaneseSymbols;
    NSCharacterSet * _containsDotCharSet;
    NSCharacterSet * _containsTwoDotsCharSet;
    NSCharacterSet * _currencySymbols;
    NSCharacterSet * _dateTimeEndLetterCharSet;
    NSCharacterSet * _dateTimeSeparatorCharSet;
    NSCharacterSet * _digitCharSet;
    NSCharacterSet * _digitEndPunctuationCharSet;
    NSCharacterSet * _digitStartPunctuationCharSet;
    NSCharacterSet * _emailAtCharSet;
    NSCharacterSet * _emailPunctuationCharSet;
    NSCharacterSet * _emoticonBottomCharSet;
    NSCharacterSet * _emoticonMiddleCharSet;
    NSCharacterSet * _emoticonTopCharSet;
    NSCharacterSet * _endOfSentencePunctuationCharSet;
    NSCharacterSet * _endOfWordPunctuationCharSet;
    NSCharacterSet * _lexiconSkipCharSet;
    NSCharacterSet * _lowercaseCharSet;
    NSCharacterSet * _middlePunctuationCharSet;
    NSCharacterSet * _nonSpaceSeparatorCharSet;
    NSCharacterSet * _numeralEndLetterCharSet;
    NSCharacterSet * _prefixCapitalizationExceptionCharSet;
    NSCharacterSet * _punctuationThatNeedSpaceCleanup;
    NSCharacterSet * _selfLoopPunctuationCharSet;
    NSCharacterSet * _sentenceStartPunctuationInSpanish;
    struct map<unsigned int, int, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, int>>> { 
        struct __tree<std::__value_type<unsigned int, int>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, int>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, int>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, int>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, int>, std::less<unsigned int>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _signatureUniChar;
    NSCharacterSet * _startPunctuationCharSet;
    struct map<unsigned int, unsigned long, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned long>>> { 
        struct __tree<std::__value_type<unsigned int, unsigned long>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, unsigned long>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, unsigned long>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long>, std::less<unsigned int>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _strokeMaxPenalties;
    NSCharacterSet * _symbolsRequiringSpaceBeforeInFrench;
    NSCharacterSet * _uppercaseCharSet;
    NSCharacterSet * _urlPunctuationCharSet;
}

+ (unsigned long long)characterType:(unsigned int)arg1;
+ (unsigned long long)characterTypeFromString:(id)arg1;
+ (unsigned long long)expectedMaxDotCount:(unsigned int)arg1;
+ (unsigned long long)expectedMaxStrokeCount:(unsigned int)arg1;
+ (unsigned long long)expectedMinStrokeCount:(unsigned int)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;

@end
