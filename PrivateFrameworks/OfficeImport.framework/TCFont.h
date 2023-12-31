
@interface TCFont : NSObject <NSCopying> {
    TCFontFamily * _family;
    NSDictionary * _namesByLanguage;
    NSString * _psName;
    struct TCFontStyling { 
        int fontClass; 
        unsigned int stringEncoding; 
        BOOL weight; 
        bool italic; 
        int width; 
    }  _styling;
}

@property (nonatomic) TCFontFamily *family;
@property (nonatomic, readonly) NSDictionary *namesByLanguage;
@property (nonatomic, readonly) NSString *psName;
@property (nonatomic, readonly) struct TCFontStyling { int x1; unsigned int x2; BOOL x3; bool x4; int x5; } styling;

+ (id)fontWithFont:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)englishName;
- (id)equivalentDictionary;
- (id)family;
- (id)initWithDictionary:(id)arg1;
- (id)initWithNamesByLanguage:(id)arg1 psName:(id)arg2 styling:(struct TCFontStyling { int x1; unsigned int x2; BOOL x3; bool x4; int x5; })arg3;
- (id)localizedFontName;
- (id)namesByLanguage;
- (int)preferredLanguage;
- (id)psName;
- (void)setFamily:(id)arg1;
- (struct TCFontStyling { int x1; unsigned int x2; BOOL x3; bool x4; int x5; })styling;

@end
