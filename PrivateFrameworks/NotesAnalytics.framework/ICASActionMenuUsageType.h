
@interface ICASActionMenuUsageType : NSObject <AADataType> {
    long long  _actionMenuUsageType;
}

@property (nonatomic, readonly) long long actionMenuUsageType;

- (long long)actionMenuUsageType;
- (id)initWithActionMenuUsageType:(long long)arg1;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
