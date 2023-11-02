
@interface TIRecipientModel : NSObject {
    NSString * _identifier;
    <TILinguisticDataSourceMessage> * _lastMessage;
    RKMessageResponseManager * _trainer;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) <TILinguisticDataSourceMessage> *lastMessage;
@property (nonatomic, retain) RKMessageResponseManager *trainer;

- (void).cxx_destruct;
- (void)handleMessages:(id)arg1;
- (id)identifier;
- (id)initWithCompositeName:(id)arg1 andTrainer:(id)arg2;
- (id)languageGuessForString:(id)arg1;
- (id)lastMessage;
- (void)setIdentifier:(id)arg1;
- (void)setLastMessage:(id)arg1;
- (void)setTrainer:(id)arg1;
- (id)trainer;

@end
