
@interface AVTAvatarAttributeEditorModelDiff : NSObject {
    NSArray * _sectionDiffs;
    NSDictionary * _sectionItemDiffs;
}

@property (nonatomic, readonly) NSArray *sectionDiffs;
@property (nonatomic, readonly) NSDictionary *sectionItemDiffs;

- (void).cxx_destruct;
- (id)initWithSectionDiffs:(id)arg1 sectionItemDiffs:(id)arg2;
- (id)sectionDiffs;
- (id)sectionItemDiffs;

@end
