
@interface DACActivityList : NSObject <NSCopying, NSSecureCoding> {
    NSMutableArray * _activeActivities;
    NSDate * _lastModified;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, readonly) NSDate *lastModified;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)activityCount;
- (bool)addActivity:(id)arg1 requester:(id)arg2 changeMarker:(id)arg3;
- (id)changeMarkerForActivity:(id)arg1;
- (id)changesFromList:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerate:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualIgnoringLastModified:(id)arg1;
- (id)lastModified;
- (id)listWithMerge:(id)arg1;
- (bool)removeActivity:(id)arg1 requester:(id)arg2;
- (void)splitLocalOnly:(id /* block */)arg1;
- (unsigned long long)stateOfActivity:(id)arg1;

@end
