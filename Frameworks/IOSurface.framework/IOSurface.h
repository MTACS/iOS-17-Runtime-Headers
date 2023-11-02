
@interface IOSurface : NSObject <NSSecureCoding> {
    void * _impl;
}

@property (readonly) long long allocationSize;
@property (readonly) bool allowsPixelSizeCasting;
@property (readonly) void*baseAddress;
@property (readonly) long long bytesPerElement;
@property (readonly) long long bytesPerRow;
@property (readonly) long long elementHeight;
@property (readonly) long long elementWidth;
@property (readonly) long long height;
@property (getter=isInUse, readonly) bool inUse;
@property (readonly) int localUseCount;
@property (readonly) unsigned int pixelFormat;
@property (readonly) unsigned long long planeCount;
@property (readonly) unsigned int seed;
@property (readonly) long long width;

// Image: /System/Library/Frameworks/IOSurface.framework/IOSurface

+ (unsigned int)numberOfUseCountCategories;
+ (bool)supportsSecureCoding;

- (unsigned long long)_cfTypeID;
- (id)allAttachments;
- (long long)allocationSize;
- (bool)allowsPixelSizeCasting;
- (id)attachmentForKey:(id)arg1;
- (void*)baseAddress;
- (void*)baseAddressOfPlaneAtIndex:(unsigned long long)arg1;
- (long long)bytesPerElement;
- (long long)bytesPerElementOfPlaneAtIndex:(unsigned long long)arg1;
- (long long)bytesPerRow;
- (long long)bytesPerRowOfPlaneAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (void)decrementUseCount;
- (void)decrementUseCountForCategory:(unsigned int)arg1;
- (id)description;
- (long long)elementHeight;
- (long long)elementHeightOfPlaneAtIndex:(unsigned long long)arg1;
- (long long)elementWidth;
- (long long)elementWidthOfPlaneAtIndex:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)hash;
- (long long)height;
- (long long)heightOfPlaneAtIndex:(unsigned long long)arg1;
- (void)incrementUseCount;
- (void)incrementUseCountForCategory:(unsigned int)arg1;
- (id)initWithClientBuffer:(struct __IOSurfaceClient { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMachPort:(unsigned int)arg1;
- (id)initWithProperties:(id)arg1;
- (id)initWithSurfaceID:(unsigned int)arg1;
- (bool)isDisplayable;
- (bool)isEqual:(id)arg1;
- (bool)isInUse;
- (bool)isInUseForAnyOtherCategory:(unsigned int)arg1;
- (bool)isInUseForCategory:(unsigned int)arg1;
- (bool)isSysMemOnly;
- (int)localUseCount;
- (int)lockWithOptions:(unsigned int)arg1 seed:(unsigned int*)arg2;
- (id)newChildSurfaceWithProperties:(id)arg1;
- (id)newWiringAssertion;
- (unsigned int)pixelFormat;
- (unsigned long long)planeCount;
- (unsigned long long)protectionOptions;
- (unsigned long long)registryID;
- (void)removeAllAttachments;
- (void)removeAttachmentForKey:(id)arg1;
- (unsigned int)seed;
- (void)setAllAttachments:(id)arg1;
- (void)setAttachment:(id)arg1 forKey:(id)arg2;
- (int)setPurgeable:(unsigned int)arg1 oldState:(unsigned int*)arg2;
- (void)setTimestamp:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (bool)supportsProtectionOptions:(unsigned long long)arg1;
- (unsigned long long)timestampAtIndex:(unsigned long long)arg1;
- (unsigned long long)traceID;
- (int)unlockWithOptions:(unsigned int)arg1 seed:(unsigned int*)arg2;
- (long long)width;
- (long long)widthOfPlaneAtIndex:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

+ (id)bs_IOSurfaceWithWidth:(long long)arg1 height:(long long)arg2 options:(unsigned long long*)arg3;

- (id)CGImageBuilder;

@end
