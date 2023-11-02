
@interface ICASNoteCreateApproach : NSObject <AADataType> {
    long long  _noteCreateApproach;
}

@property (nonatomic, readonly) long long noteCreateApproach;

- (id)initWithNoteCreateApproach:(long long)arg1;
- (long long)noteCreateApproach;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
