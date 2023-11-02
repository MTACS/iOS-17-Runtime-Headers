
@interface ICASNoteEditContext : NSObject <AADataType> {
    long long  _noteEditContext;
}

@property (nonatomic, readonly) long long noteEditContext;

- (id)initWithNoteEditContext:(long long)arg1;
- (long long)noteEditContext;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
