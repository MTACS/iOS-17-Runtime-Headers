
@interface MMElement : NSObject {
    long long  _alignment;
    NSMutableArray * _children;
    NSString * _href;
    NSString * _identifier;
    NSMutableArray * _innerRanges;
    NSString * _language;
    unsigned long long  _level;
    MMElement * _parent;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    NSString * _stringValue;
    NSString * _title;
    int  _type;
}

@property (nonatomic) long long alignment;
@property (nonatomic, copy) NSArray *children;
@property (nonatomic, copy) NSString *href;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSArray *innerRanges;
@property (nonatomic, copy) NSString *language;
@property (nonatomic) unsigned long long level;
@property (nonatomic) MMElement *parent;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, copy) NSString *stringValue;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (void)addChild:(id)arg1;
- (void)addInnerRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (long long)alignment;
- (id)children;
- (void)dealloc;
- (id)description;
- (id)href;
- (id)identifier;
- (id)init;
- (id)innerRanges;
- (id)language;
- (unsigned long long)level;
- (id)parent;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)removeChild:(id)arg1;
- (id)removeLastChild;
- (void)removeLastInnerRange;
- (void)setAlignment:(long long)arg1;
- (void)setChildren:(id)arg1;
- (void)setHref:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInnerRanges:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLevel:(unsigned long long)arg1;
- (void)setParent:(id)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setStringValue:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(int)arg1;
- (id)stringValue;
- (id)title;
- (int)type;

@end
