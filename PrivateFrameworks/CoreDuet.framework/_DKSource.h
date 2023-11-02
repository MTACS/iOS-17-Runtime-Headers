
@interface _DKSource : NSObject <NSSecureCoding, _DKProtobufConverting> {
    NSString * _bundleID;
    NSString * _deviceID;
    NSString * _groupID;
    NSString * _intentID;
    NSString * _itemID;
    NSString * _sourceID;
    NSNumber * _userID;
}

@property (readonly) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSString *deviceID;
@property (readonly) NSString *groupID;
@property (readonly) unsigned long long hash;
@property (retain) NSString *intentID;
@property (readonly) NSString *itemID;
@property (readonly) NSString *sourceID;
@property (readonly) Class superclass;
@property (readonly) NSString *syncDeviceID;
@property (retain) NSNumber *userID;

// Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet

+ (id)defaultSourceID;
+ (id)entityName;
+ (id)fromPBCodable:(id)arg1;
+ (id)intentsSourceID;
+ (id)sourceForInteraction:(id)arg1 bundleID:(id)arg2;
+ (id)sourceForSearchableItem:(id)arg1 bundleID:(id)arg2;
+ (id)spotlightSourceID;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleID;
- (id)description;
- (id)deviceID;
- (void)encodeWithCoder:(id)arg1;
- (id)groupID;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 itemIdentifier:(id)arg3 groupIdentifier:(id)arg4 deviceIdentifier:(id)arg5 userIdentifier:(id)arg6;
- (id)initWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 itemIdentifier:(id)arg3 groupIdentifier:(id)arg4 deviceIdentifier:(id)arg5 userIdentifier:(id)arg6 intentIdentifier:(id)arg7;
- (id)intentID;
- (bool)isEqual:(id)arg1;
- (id)itemID;
- (void)setDeviceID:(id)arg1;
- (void)setIntentID:(id)arg1;
- (void)setUserID:(id)arg1;
- (id)sourceID;
- (id)syncDeviceID;
- (id)toPBCodable;
- (id)userID;

// Image: /System/Library/PrivateFrameworks/TipKitCore.framework/TipKitCore

- (id)initWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2;

@end
