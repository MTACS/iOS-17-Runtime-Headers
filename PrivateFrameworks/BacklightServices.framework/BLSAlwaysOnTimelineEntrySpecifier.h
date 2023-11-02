
@interface BLSAlwaysOnTimelineEntrySpecifier : NSObject <NSCopying> {
    bool  _didChange;
    long long  _grantedFidelity;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    double  _percentComplete;
    BLSAlwaysOnTimelineEntry * _previousTimelineEntry;
    long long  _requestedFidelity;
    BLSAlwaysOnTimelineEntry * _timelineEntry;
}

@property bool didChange;
@property long long grantedFidelity;
@property (readonly) double percentComplete;
@property (readonly) BLSAlwaysOnTimelineEntry *previousTimelineEntry;
@property long long requestedFidelity;
@property (readonly) BLSAlwaysOnTimelineEntry *timelineEntry;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (bool)didChange;
- (long long)grantedFidelity;
- (unsigned long long)hash;
- (id)initWithTimelineEntry:(id)arg1 percentComplete:(double)arg2 previousTimelineEntry:(id)arg3 didChange:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (double)percentComplete;
- (id)previousTimelineEntry;
- (long long)requestedFidelity;
- (void)setDidChange:(bool)arg1;
- (void)setGrantedFidelity:(long long)arg1;
- (void)setRequestedFidelity:(long long)arg1;
- (id)timelineEntry;

@end
