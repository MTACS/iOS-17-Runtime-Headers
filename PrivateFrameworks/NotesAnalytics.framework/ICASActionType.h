
@interface ICASActionType : NSObject <AADataType> {
    long long  _actionType;
}

@property (nonatomic, readonly) long long actionType;

- (long long)actionType;
- (id)initWithActionType:(long long)arg1;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
