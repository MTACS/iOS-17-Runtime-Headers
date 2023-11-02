
@interface SWCollaborationShareOptions : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _optionsGroups;
    NSString * _summary;
}

@property (nonatomic, copy) NSArray *optionsGroups;
@property (nonatomic, copy) NSString *summary;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)shareOptionsWithOptionsGroups:(id)arg1;
+ (id)shareOptionsWithOptionsGroups:(id)arg1 summary:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOptionsGroups:(id)arg1;
- (id)initWithOptionsGroups:(id)arg1 summary:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToShareOptions:(id)arg1;
- (id)optionsGroups;
- (void)setOptionsGroups:(id)arg1;
- (void)setSummary:(id)arg1;
- (id)summary;

@end
