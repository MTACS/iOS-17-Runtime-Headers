
@interface DRPasteAnnouncementApplicationEndpoint : DRPasteAnnouncementEndpoint {
    struct { 
        unsigned int isHomeScreen : 1; 
    }  _flags;
    NSData * _persistentIdentifier;
}

@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSData *persistentIdentifier;

+ (id)homeScreenEndpoint;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalizedName:(id)arg1 persistentIdentifier:(id)arg2;
- (id)persistentIdentifier;

@end
