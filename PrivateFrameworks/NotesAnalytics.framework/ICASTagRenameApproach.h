
@interface ICASTagRenameApproach : NSObject <AADataType> {
    long long  _tagRenameApproach;
}

@property (nonatomic, readonly) long long tagRenameApproach;

- (id)initWithTagRenameApproach:(long long)arg1;
- (long long)tagRenameApproach;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
