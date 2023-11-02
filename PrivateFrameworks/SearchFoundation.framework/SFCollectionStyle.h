
@interface SFCollectionStyle : NSObject <NSCopying, NSSecureCoding, SFCollectionStyle> {
    struct { 
        unsigned int initiallyVisibleCardSectionCount : 1; 
    }  _has;
    unsigned long long  _initiallyVisibleCardSectionCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long initiallyVisibleCardSectionCount;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasInitiallyVisibleCardSectionCount;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (unsigned long long)initiallyVisibleCardSectionCount;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (void)setInitiallyVisibleCardSectionCount:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (id)searchUISectionModelForCardRowModels:(id)arg1 section:(id)arg2 expandedCollectionSections:(id)arg3;

@end
