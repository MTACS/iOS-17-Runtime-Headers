
@interface BRCTransferFailureReport : NSObject {
    NSError * _error;
    NSDate * _lastFailureDate;
    NSMutableDictionary * _privateDBErrorCountByPCSState;
    NSMutableDictionary * _shareDBErrorCountByPCSState;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSDate *lastFailureDate;
@property (nonatomic, readonly) NSDictionary *privateDBErrorCountByPCSState;
@property (nonatomic, readonly) NSDictionary *shareDBErrorCountByPCSState;

- (void).cxx_destruct;
- (id)description;
- (void)encounteredErrorWithPCSState:(unsigned int)arg1 privateDB:(bool)arg2 atDate:(id)arg3;
- (void)encounteredErrors:(unsigned long long)arg1 atDate:(id)arg2;
- (id)error;
- (unsigned long long)hash;
- (id)initWithError:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTransferFailureReport:(id)arg1;
- (id)lastFailureDate;
- (id)privateDBErrorCountByPCSState;
- (void)setLastFailureDate:(id)arg1;
- (id)shareDBErrorCountByPCSState;

@end
