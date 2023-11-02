
@interface SGMIBiomeSummaryResults : NSObject {
    NSDictionary * _biomeMessageIdByPersistentId;
    NSDictionary * _biomeSummaryByMessage;
}

@property (nonatomic, readonly) NSDictionary *biomeMessageIdByPersistentId;
@property (nonatomic, readonly) NSDictionary *biomeSummaryByMessage;

- (void).cxx_destruct;
- (id)biomeMessageIdByPersistentId;
- (id)biomeSummaryByMessage;
- (id)initWithBiomeSummaryByMessage:(id)arg1 biomeMessageIdByPersistentId:(id)arg2;

@end
