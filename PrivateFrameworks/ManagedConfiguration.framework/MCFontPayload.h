
@interface MCFontPayload : MCPayload {
    NSData * _fontData;
    NSString * _name;
    NSURL * _persistentURL;
}

@property (nonatomic, retain) NSData *fontData;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSURL *persistentURL;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)fontData;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)name;
- (id)persistentURL;
- (void)setFontData:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPersistentURL:(id)arg1;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)title;
- (id)verboseDescription;

@end
