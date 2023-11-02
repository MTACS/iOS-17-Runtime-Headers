
@interface GEOComposedStringOptions : NSObject <NSCopying> {
    NSArray * _arguments;
    bool  _createAttributedString;
    id /* block */  _formatStyleHandler;
    bool  _isUpdatingFormatString;
    bool  _shouldUpdateFormatStrings;
    NSDictionary * _stringAttributes;
}

@property (nonatomic, retain) NSArray *arguments;
@property (nonatomic) bool createAttributedString;
@property (nonatomic, copy) id /* block */ formatStyleHandler;
@property (nonatomic) bool shouldUpdateFormatStrings;
@property (nonatomic, retain) NSDictionary *stringAttributes;

- (void).cxx_destruct;
- (id)arguments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)createAttributedString;
- (id /* block */)formatStyleHandler;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setArguments:(id)arg1;
- (void)setCreateAttributedString:(bool)arg1;
- (void)setFormatStyleHandler:(id /* block */)arg1;
- (void)setShouldUpdateFormatStrings:(bool)arg1;
- (void)setStringAttributes:(id)arg1;
- (bool)shouldUpdateFormatStrings;
- (id)stringAttributes;

@end
