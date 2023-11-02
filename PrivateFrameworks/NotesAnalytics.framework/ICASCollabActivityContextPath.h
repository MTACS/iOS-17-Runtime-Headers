
@interface ICASCollabActivityContextPath : NSObject <AADataType> {
    long long  _collabActivityContextPath;
}

@property (nonatomic, readonly) long long collabActivityContextPath;

- (long long)collabActivityContextPath;
- (id)initWithCollabActivityContextPath:(long long)arg1;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
