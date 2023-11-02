
@interface UIInputContextHistory : NSObject {
    TIInputContextHistory * _tiInputContextHistory;
}

@property (nonatomic, readonly) NSSet *recipientIdentifiers;
@property (nonatomic, readonly) NSSet *recipientNames;
@property (nonatomic, readonly) NSString *senderIdentifier;
@property (nonatomic, readonly) NSSet *senderIdentifiers;
@property (nonatomic, readonly) TIInputContextHistory *tiInputContextHistory;

- (void).cxx_destruct;
- (void)addTextEntry:(id)arg1 timestamp:(id)arg2;
- (void)addTextEntry:(id)arg1 timestamp:(id)arg2 senderIdentifier:(id)arg3;
- (id)initWithInputContextHistory:(id)arg1;
- (id)initWithRecipientIdentifiers:(id)arg1;
- (id)initWithRecipientIdentifiers:(id)arg1 senderIdentifier:(id)arg2;
- (id)initWithRecipientIdentifiers:(id)arg1 senderIdentifiers:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mostRecentTextEntries:(unsigned long long)arg1;
- (id)recipientIdentifiers;
- (id)recipientNames;
- (id)senderIdentifier;
- (id)senderIdentifiers;
- (id)tiInputContextHistory;
- (void)updateRecipientNames:(id)arg1;

@end
