
@interface BLSAlwaysOnFrameSpecifier : NSObject <NSCopying> {
    NSArray * _entrySpecifiers;
    long long  _grantedFidelity;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSDateInterval * _presentationInterval;
}

@property (readonly) NSArray *entrySpecifiers;
@property long long grantedFidelity;
@property (readonly) NSDateInterval *presentationInterval;
@property (readonly) long long requestedFidelity;

+ (id)loggingStringForPresentationInterval:(id)arg1;
+ (id)shortLoggingStringForPresentationInterval:(id)arg1;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)correctedSpecifierWithNextSpecifier:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)entrySpecifierForTimelineIdentifier:(id)arg1;
- (id)entrySpecifiers;
- (long long)grantedFidelity;
- (unsigned long long)hash;
- (id)initWithTimelineEntry:(id)arg1 previousTimelineEntry:(id)arg2;
- (id)initWithTimelineEntrySpecifiers:(id)arg1 presentationInterval:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)presentationInterval;
- (long long)requestedFidelity;
- (void)setGrantedFidelity:(long long)arg1;

@end
