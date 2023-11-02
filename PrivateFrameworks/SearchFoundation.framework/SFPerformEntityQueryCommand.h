
@interface SFPerformEntityQueryCommand : SFCommand <NSCopying, NSSecureCoding, SFPerformEntityQueryCommand> {
    SFDrillDownMetadata * _drilldownMetadata;
    SFColor * _entityBackgroundColor;
    NSString * _entityIdentifier;
    int  _entityType;
    struct { 
        unsigned int entityType : 1; 
    }  _has;
    SFDrillDownMetadata * _metadata;
    NSString * _searchString;
    SFSymbolImage * _symbolImage;
    NSString * _tokenString;
}

@property (nonatomic, copy) NSData *backendData;
@property (nonatomic, copy) NSString *commandDetail;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, retain) SFDrillDownMetadata *drilldownMetadata;
@property (nonatomic, retain) SFColor *entityBackgroundColor;
@property (nonatomic, copy) NSString *entityIdentifier;
@property (nonatomic) int entityType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SFDrillDownMetadata *metadata;
@property (nonatomic, retain) SFTopic *normalizedTopic;
@property (nonatomic, copy) NSString *searchString;
@property (readonly) Class superclass;
@property (nonatomic, retain) SFSymbolImage *symbolImage;
@property (nonatomic, copy) NSString *tokenString;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)drilldownMetadata;
- (void)encodeWithCoder:(id)arg1;
- (id)entityBackgroundColor;
- (id)entityIdentifier;
- (int)entityType;
- (bool)hasEntityType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)metadata;
- (id)searchString;
- (void)setDrilldownMetadata:(id)arg1;
- (void)setEntityBackgroundColor:(id)arg1;
- (void)setEntityIdentifier:(id)arg1;
- (void)setEntityType:(int)arg1;
- (void)setMetadata:(id)arg1;
- (void)setSearchString:(id)arg1;
- (void)setSymbolImage:(id)arg1;
- (void)setTokenString:(id)arg1;
- (id)symbolImage;
- (id)tokenString;

// Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

- (int)_cpCommandType;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (id)_searchui_prefixMatchExtensionString;

@end
