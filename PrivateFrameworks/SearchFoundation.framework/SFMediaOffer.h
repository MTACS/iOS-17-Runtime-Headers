
@interface SFMediaOffer : SFActionItem <NSCopying, NSSecureCoding, SFMediaOffer> {
    SFActionItem * _actionItem;
    struct { 
        unsigned int isEnabled : 1; 
    }  _has;
    SFImage * _image;
    bool  _isEnabled;
    NSString * _offerIdentifier;
    NSString * _sublabel;
}

@property (nonatomic, retain) SFActionItem *actionItem;
@property (nonatomic, copy) NSString *applicationBundleIdentifier;
@property (nonatomic, retain) SFImage *baseIcon;
@property (nonatomic, copy) NSString *contactIdentifier;
@property (nonatomic, retain) SFPunchout *customDirectionsPunchout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic) int directionsMode;
@property (nonatomic, copy) NSString *email;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SFImage *icon;
@property (nonatomic, retain) SFImage *image;
@property (nonatomic, copy) NSString *interactionContentType;
@property (nonatomic) bool isEnabled;
@property (nonatomic) bool isITunes;
@property (nonatomic) bool isOverlay;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *labelForLocalMedia;
@property (nonatomic, copy) NSString *labelITunes;
@property (nonatomic) double latitude;
@property (nonatomic, copy) NSString *localMediaIdentifier;
@property (nonatomic, retain) SFLatLng *location;
@property (nonatomic) double longitude;
@property (nonatomic, copy) NSData *mapsData;
@property (nonatomic) int mediaEntityType;
@property (nonatomic, copy) NSString *messageIdentifier;
@property (nonatomic, copy) NSURL *messageURL;
@property (nonatomic, copy) NSString *offerIdentifier;
@property (nonatomic, copy) NSString *offerType;
@property (nonatomic, copy) NSString *persistentID;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) NSString *provider;
@property (nonatomic, retain) SFPunchout *punchout;
@property (nonatomic) bool requiresLocalMedia;
@property (nonatomic) bool shouldSearchDirectionsAlongCurrentRoute;
@property (nonatomic, copy) NSArray *storeIdentifiers;
@property (nonatomic, copy) NSString *sublabel;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSString *universalLibraryID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionItem;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIsEnabled;
- (unsigned long long)hash;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)offerIdentifier;
- (void)setActionItem:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setIsEnabled:(bool)arg1;
- (void)setOfferIdentifier:(id)arg1;
- (void)setSublabel:(id)arg1;
- (id)sublabel;

@end
