
@interface ICASNotesToPagesContextPath : NSObject <AADataType> {
    long long  _notesToPagesContextPath;
}

@property (nonatomic, readonly) long long notesToPagesContextPath;

- (id)initWithNotesToPagesContextPath:(long long)arg1;
- (long long)notesToPagesContextPath;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
