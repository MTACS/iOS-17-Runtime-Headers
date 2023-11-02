
@interface PKColorMatrixViewPoint : NSObject {
    long long  _col;
    long long  _row;
}

@property (nonatomic, readonly) long long col;
@property (nonatomic, readonly) long long row;

+ (id)pointWithRow:(long long)arg1 col:(long long)arg2;

- (long long)col;
- (id)initWithRow:(long long)arg1 col:(long long)arg2;
- (long long)row;

@end
