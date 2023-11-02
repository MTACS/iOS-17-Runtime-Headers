
@interface WFREPBAlert : PBCodable <NSCopying> {
    NSMutableArray * _buttons;
    struct { 
        unsigned int preferredStyle : 1; 
    }  _has;
    NSString * _message;
    int  _preferredStyle;
    NSString * _title;
}

@property (nonatomic, retain) NSMutableArray *buttons;
@property (nonatomic, readonly) bool hasMessage;
@property (nonatomic) bool hasPreferredStyle;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, retain) NSString *message;
@property (nonatomic) int preferredStyle;
@property (nonatomic, retain) NSString *title;

+ (Class)buttonsType;

- (void).cxx_destruct;
- (int)StringAsPreferredStyle:(id)arg1;
- (void)addButtons:(id)arg1;
- (id)buttons;
- (id)buttonsAtIndex:(unsigned long long)arg1;
- (unsigned long long)buttonsCount;
- (void)clearButtons;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMessage;
- (bool)hasPreferredStyle;
- (bool)hasTitle;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)message;
- (int)preferredStyle;
- (id)preferredStyleAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setButtons:(id)arg1;
- (void)setHasPreferredStyle:(bool)arg1;
- (void)setMessage:(id)arg1;
- (void)setPreferredStyle:(int)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)writeTo:(id)arg1;

@end
