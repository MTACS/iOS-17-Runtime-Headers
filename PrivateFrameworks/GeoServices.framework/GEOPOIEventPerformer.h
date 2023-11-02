
@interface GEOPOIEventPerformer : NSObject <NSSecureCoding> {
    NSString * _iTunesIdentifier;
    NSURL * _iTunesURL;
    NSString * _localizedName;
}

@property (nonatomic, retain) NSString *iTunesIdentifier;
@property (nonatomic, retain) NSURL *iTunesURL;
@property (nonatomic, retain) NSString *localizedName;

+ (id)poiEventPerformersForPerformers:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)iTunesIdentifier;
- (id)iTunesURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithPerformer:(id)arg1;
- (id)localizedName;
- (void)setITunesIdentifier:(id)arg1;
- (void)setITunesURL:(id)arg1;
- (void)setLocalizedName:(id)arg1;

@end
