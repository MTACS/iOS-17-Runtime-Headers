
@interface NTPBPublisherPaidDescriptionStrings : PBCodable <NSCopying> {
    NTPBPaywallDescription * _paywallDescription;
}

@property (nonatomic, readonly) bool hasPaywallDescription;
@property (nonatomic, retain) NTPBPaywallDescription *paywallDescription;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPaywallDescription;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)paywallDescription;
- (bool)readFrom:(id)arg1;
- (void)setPaywallDescription:(id)arg1;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)publisherPaidDescriptionStringsFromJSON:(id)arg1;

@end
