
@interface NSCountedSet : NSMutableSet {
    id  _table;
}

@property (nonatomic, readonly) id safari_highestFrequencyObject;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)supportsSecureCoding;

- (void)addObject:(id)arg1;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (unsigned long long)countForObject:(id)arg1;
- (void)dealloc;
- (id)descriptionWithLocale:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)getObjects:(id*)arg1 count:(unsigned long long)arg2;
- (id)init;
- (id)initWithArray:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
- (id)initWithSet:(id)arg1;
- (id)initWithSet:(id)arg1 copyItems:(bool)arg2;
- (id)member:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectEnumerator;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation

- (id)ef_leastCommonObjects;
- (id)ef_mostCommonObjects;

// Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit

- (void)enumerateObjectsSortedByCountUsingBlock:(id /* block */)arg1 ascending:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy

- (id)mf_debugDescription;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities

- (id)na_mostCommonObject;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (id)fc_description;

// Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph

- (unsigned long long)pg_accumulatedCount;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

- (id)safari_highestFrequencyObject;

// Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/IMAP.framework/IMAP

- (id)mf_debugDescription;

@end
