
@interface SFCollaborationShareOptions : NSObject {
    NSArray * _optionsGroups;
    NSString * _summary;
}

@property (nonatomic, copy) NSArray *optionsGroups;
@property (nonatomic, copy) NSString *summary;

- (void).cxx_destruct;
- (id)optionsGroups;
- (void)setOptionsGroups:(id)arg1;
- (void)setSummary:(id)arg1;
- (id)summary;

@end
