
@interface ICTextStyle : NSObject {
    NSDictionary * _attributes;
    NSString * _name;
    unsigned int  _ttStyle;
}

@property (nonatomic, readonly, copy) NSAttributedString *attributedName;
@property (retain) NSDictionary *attributes;
@property (readonly) bool isTextList;
@property (retain) NSString *name;
@property unsigned int ttStyle;

+ (bool)autoListInsertionEnabled;
+ (id)bodyStyle;
+ (id)bulletStyle;
+ (id)dashStyle;
+ (id)defaultTextStyles;
+ (id)fixedWidthStyle;
+ (id)headingStyle;
+ (id)icaxStyleDescriptionForBIUSStyle:(unsigned long long)arg1;
+ (id)icaxStyleDescriptionForNamedStyle:(unsigned int)arg1;
+ (unsigned int)noteDefaultNamedStyle;
+ (id)numberedStyle;
+ (void)setAutoListInsertionEnabled:(bool)arg1;
+ (void)setNoteDefaultNamedStyle:(unsigned int)arg1;
+ (id)settingsDescriptionForNamedStyle:(unsigned int)arg1;
+ (id)styleForNamedStyle:(unsigned int)arg1;
+ (id)subheadingStyle;
+ (id)titleForNamedStyle:(unsigned int)arg1;
+ (id)titleStyle;
+ (unsigned int)validatedNamedStyle:(unsigned int)arg1;

- (void).cxx_destruct;
- (id)attributedName;
- (id)attributes;
- (id)icaxStyleDescription;
- (bool)isTextList;
- (id)name;
- (void)setAttributes:(id)arg1;
- (void)setName:(id)arg1;
- (void)setTtStyle:(unsigned int)arg1;
- (unsigned int)ttStyle;

@end
