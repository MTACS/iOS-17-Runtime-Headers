
@interface EDAMNoteRestrictions : FATObject {
    NSNumber * _noEmail;
    NSNumber * _noShare;
    NSNumber * _noSharePublicly;
    NSNumber * _noUpdateContent;
    NSNumber * _noUpdateTitle;
}

@property (nonatomic, retain) NSNumber *noEmail;
@property (nonatomic, retain) NSNumber *noShare;
@property (nonatomic, retain) NSNumber *noSharePublicly;
@property (nonatomic, retain) NSNumber *noUpdateContent;
@property (nonatomic, retain) NSNumber *noUpdateTitle;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)noEmail;
- (id)noShare;
- (id)noSharePublicly;
- (id)noUpdateContent;
- (id)noUpdateTitle;
- (void)setNoEmail:(id)arg1;
- (void)setNoShare:(id)arg1;
- (void)setNoSharePublicly:(id)arg1;
- (void)setNoUpdateContent:(id)arg1;
- (void)setNoUpdateTitle:(id)arg1;

@end
