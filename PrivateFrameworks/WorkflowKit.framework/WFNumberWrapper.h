
@interface WFNumberWrapper : NSObject {
    NSNumber * _number;
}

@property (nonatomic, readonly) NSNumber *number;

+ (id)wrapperWithNumber:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)number;

@end
