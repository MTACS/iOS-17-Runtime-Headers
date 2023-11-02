
@interface NTPBSectionDisplayDescriptor : PBCodable <NSCopying> {
    NSString * _actionTitle;
    NSString * _actionURLString;
    NSString * _backgroundColorDark;
    NSString * _backgroundColorLight;
    NSString * _backgroundGradientColor;
    NSString * _name;
    NSString * _nameActionURLString;
    NSString * _nameColorDark;
    NSString * _nameColorLight;
}

@property (nonatomic, retain) NSString *actionTitle;
@property (nonatomic, copy) NSURL *actionURL;
@property (nonatomic, retain) NSString *actionURLString;
@property (nonatomic, retain) NSString *backgroundColorDark;
@property (nonatomic, retain) NSString *backgroundColorLight;
@property (nonatomic, retain) NSString *backgroundGradientColor;
@property (nonatomic, readonly) bool hasActionTitle;
@property (nonatomic, readonly) bool hasActionURLString;
@property (nonatomic, readonly) bool hasBackgroundColorDark;
@property (nonatomic, readonly) bool hasBackgroundColorLight;
@property (nonatomic, readonly) bool hasBackgroundGradientColor;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasNameActionURLString;
@property (nonatomic, readonly) bool hasNameColorDark;
@property (nonatomic, readonly) bool hasNameColorLight;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, copy) NSURL *nameActionURL;
@property (nonatomic, retain) NSString *nameActionURLString;
@property (nonatomic, retain) NSString *nameColorDark;
@property (nonatomic, retain) NSString *nameColorLight;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

- (void).cxx_destruct;
- (id)actionTitle;
- (id)actionURLString;
- (id)backgroundColorDark;
- (id)backgroundColorLight;
- (id)backgroundGradientColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActionTitle;
- (bool)hasActionURLString;
- (bool)hasBackgroundColorDark;
- (bool)hasBackgroundColorLight;
- (bool)hasBackgroundGradientColor;
- (bool)hasName;
- (bool)hasNameActionURLString;
- (bool)hasNameColorDark;
- (bool)hasNameColorLight;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (id)nameActionURLString;
- (id)nameColorDark;
- (id)nameColorLight;
- (bool)readFrom:(id)arg1;
- (void)setActionTitle:(id)arg1;
- (void)setActionURLString:(id)arg1;
- (void)setBackgroundColorDark:(id)arg1;
- (void)setBackgroundColorLight:(id)arg1;
- (void)setBackgroundGradientColor:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNameActionURLString:(id)arg1;
- (void)setNameColorDark:(id)arg1;
- (void)setNameColorLight:(id)arg1;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday

- (id)actionURL;
- (id)nameActionURL;
- (void)setActionURL:(id)arg1;
- (void)setNameActionURL:(id)arg1;

@end
