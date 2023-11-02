
@interface ICASActionMenuContextType : NSObject <AADataType> {
    long long  _actionMenuContextType;
}

@property (nonatomic, readonly) long long actionMenuContextType;

- (long long)actionMenuContextType;
- (id)initWithActionMenuContextType:(long long)arg1;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
