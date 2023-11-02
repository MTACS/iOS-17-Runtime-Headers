
@interface ICASNoteType : NSObject <AADataType> {
    long long  _noteType;
}

@property (nonatomic, readonly) long long noteType;

- (id)initWithNoteType:(long long)arg1;
- (long long)noteType;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
