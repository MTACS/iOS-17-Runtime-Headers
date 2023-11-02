
@interface TIInputContextHistory : NSObject <NSCopying, NSSecureCoding> {
    struct set<NSHolder<_TIInputContextEntry>, std::less<NSHolder<_TIInputContextEntry>>, std::allocator<NSHolder<_TIInputContextEntry>>> { 
        struct __tree<NSHolder<_TIInputContextEntry>, std::less<NSHolder<_TIInputContextEntry>>, std::allocator<NSHolder<_TIInputContextEntry>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<NSHolder<_TIInputContextEntry>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::less<NSHolder<_TIInputContextEntry>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _entries;
    struct set<NSHolder<_TIInputContextEntry>, std::less<NSHolder<_TIInputContextEntry>>, std::allocator<NSHolder<_TIInputContextEntry>>> { 
        struct __tree<NSHolder<_TIInputContextEntry>, std::less<NSHolder<_TIInputContextEntry>>, std::allocator<NSHolder<_TIInputContextEntry>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<NSHolder<_TIInputContextEntry>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::less<NSHolder<_TIInputContextEntry>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _pendingEntries;
    NSSet * _recipientIdentifiers;
    NSSet * _recipientNames;
    NSSet * _senderIdentifiers;
}

@property (nonatomic, readonly) NSString *aggregateText;
@property (nonatomic, readonly) NSString *mostRecentNonSenderTextEntry;
@property (nonatomic, readonly) bool mostRecentTextEntryIsByMe;
@property (nonatomic, readonly) NSString *mostRecentTextEntryLogString;
@property (nonatomic, readonly) NSSet *recipientIdentifiers;
@property (nonatomic, readonly) NSSet *recipientNames;
@property (nonatomic, readonly) NSString *senderIdentifier;
@property (nonatomic, readonly) NSSet *senderIdentifiers;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_enumerateAllEntriesAsInputContextEntries:(id /* block */)arg1;
- (void)addTextEntry:(id)arg1 timestamp:(id)arg2;
- (void)addTextEntry:(id)arg1 timestamp:(id)arg2 senderIdentifier:(id)arg3;
- (id)aggregateText;
- (void)appendPendingEntriesFromInputContextHistory:(id)arg1;
- (void)assertCheckpointForCoding;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateAllEntries:(id /* block */)arg1;
- (void)enumeratePendingEntries:(id /* block */)arg1;
- (bool)hasPendingEntries;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecipientIdentifiers:(id)arg1;
- (id)initWithRecipientIdentifiers:(id)arg1 senderIdentifier:(id)arg2;
- (id)initWithRecipientIdentifiers:(id)arg1 senderIdentifiers:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mostRecentNonSenderTextEntry;
- (id)mostRecentTextEntries:(unsigned long long)arg1;
- (id)mostRecentTextEntry;
- (bool)mostRecentTextEntryIsByMe;
- (id)mostRecentTextEntryLogString;
- (id)recipientIdentifiers;
- (id)recipientNames;
- (id)senderIdentifier;
- (id)senderIdentifiers;
- (void)updateRecipientNames:(id)arg1;

@end
