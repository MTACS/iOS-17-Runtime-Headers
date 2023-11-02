
@interface SFCollectionStyleRow : SFCollectionStyle <NSCopying, NSSecureCoding, SFCollectionStyleRow> {
    bool  _drawPlattersIfNecessary;
    struct { 
        unsigned int drawPlattersIfNecessary : 1; 
    }  _has;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic) bool drawPlattersIfNecessary;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long initiallyVisibleCardSectionCount;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)drawPlattersIfNecessary;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasDrawPlattersIfNecessary;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (void)setDrawPlattersIfNecessary:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (id)searchUISectionModelForCardRowModels:(id)arg1 section:(id)arg2 expandedCollectionSections:(id)arg3;

@end
