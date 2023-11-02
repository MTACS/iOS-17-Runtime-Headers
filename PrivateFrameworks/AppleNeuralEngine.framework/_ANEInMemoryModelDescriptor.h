
@interface _ANEInMemoryModelDescriptor : NSObject {
    bool  _isMILModel;
    NSData * _networkText;
    NSString * _networkTextHash;
    NSData * _optionsPlist;
    NSString * _optionsPlistHash;
    NSDictionary * _weights;
    NSString * _weightsHash;
}

@property (nonatomic, readonly) bool isMILModel;
@property (nonatomic, readonly, copy) NSData *networkText;
@property (nonatomic, readonly, copy) NSString *networkTextHash;
@property (nonatomic, readonly) NSData *optionsPlist;
@property (nonatomic, readonly) NSString *optionsPlistHash;
@property (nonatomic, readonly) NSDictionary *weights;
@property (nonatomic, readonly, copy) NSString *weightsHash;

+ (id)modelWithMILText:(id)arg1 weights:(id)arg2 optionsPlist:(id)arg3;
+ (id)modelWithNetworkDescription:(id)arg1 weights:(id)arg2 optionsPlist:(id)arg3;
+ (id)new;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)hexStringIdentifier;
- (id)init;
- (id)initWithNetworkText:(id)arg1 weights:(id)arg2 optionsPlist:(id)arg3 isMILModel:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToInMemoryModelDescriptor:(id)arg1;
- (bool)isMILModel;
- (id)networkText;
- (id)networkTextHash;
- (id)optionsPlist;
- (id)optionsPlistHash;
- (id)weights;
- (id)weightsHash;

@end
