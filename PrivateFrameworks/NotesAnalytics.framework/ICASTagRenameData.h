
@interface ICASTagRenameData : NSObject <AADataEventType> {
    ICASTagRenameApproach * _tagRenameApproach;
}

@property (nonatomic, readonly) ICASTagRenameApproach *tagRenameApproach;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithTagRenameApproach:(id)arg1;
- (id)tagRenameApproach;
- (id)toDict;

@end
