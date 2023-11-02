
@interface HMMediaPlaybackAction : HMAction <NSCopying, NSMutableCopying> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSSet * _mediaProfiles;
    MPPlaybackArchive * _playbackArchive;
    long long  _state;
    NSNumber * _volume;
}

@property (nonatomic, readonly, copy) NSSet *mediaProfiles;
@property (nonatomic, readonly) MPPlaybackArchive *playbackArchive;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly, copy) NSNumber *volume;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)actionWithProtoBuf:(id)arg1 home:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 actionSet:(id)arg2;
- (bool)_handleUpdates:(id)arg1;
- (id)_serializeForAdd;
- (bool)_updateWithSerializedAction:(id)arg1 home:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)encodeAsProtoBuf;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 home:(id)arg2;
- (id)initWithMediaProfiles:(id)arg1 playbackState:(long long)arg2 volume:(id)arg3 playbackArchive:(id)arg4;
- (id)initWithUUID:(id)arg1;
- (bool)isAffectedByEndEvents;
- (bool)isEqual:(id)arg1;
- (bool)isValidWithError:(id*)arg1;
- (id)mediaProfiles;
- (bool)mergeFromNewObject:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)playbackArchive;
- (long long)state;
- (unsigned long long)type;
- (void)updateWithAction:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)volume;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_affectedAccessoryProfiles;
- (id)hf_affectedAccessoryRepresentables;
- (id)hf_affectedCharacteristic;

@end
