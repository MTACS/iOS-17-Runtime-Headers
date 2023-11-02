
@interface ICInAppMessageMetadataEntry : NSObject <NSCopying, NSSecureCoding> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableDictionary * _metadataValues;
}

@property (nonatomic) bool didCancelUserNotification;
@property (nonatomic) unsigned long long numberOfDisplays;

// Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allMetadataValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)metadataValueForKey:(id)arg1;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/InAppMessagesCore.framework/InAppMessagesCore

- (bool)didCancelUserNotification;
- (unsigned long long)numberOfDisplays;
- (void)setDidCancelUserNotification:(bool)arg1;
- (void)setNumberOfDisplays:(unsigned long long)arg1;

@end
