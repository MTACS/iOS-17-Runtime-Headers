
@interface HMDFMF : NSObject {
    unsigned long long  _value;
}

@property (nonatomic, readonly) NSNumber *number;
@property (nonatomic, readonly) unsigned long long value;

+ (id)fmfStatusWithCoder:(id)arg1;
+ (id)fmfStatusWithDict:(id)arg1;
+ (id)fmfStatusWithMessage:(id)arg1;
+ (id)fmfStatusWithNumber:(id)arg1;
+ (id)fmfStatusWithValue:(unsigned long long)arg1;

- (void)addToCoder:(id)arg1;
- (void)addToPayload:(id)arg1;
- (id)description;
- (id)initWithNumber:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)number;
- (unsigned long long)value;

@end
