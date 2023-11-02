
@interface NSEnumerator : NSObject <EFSQLValueCollectionExpressable, NSFastEnumeration>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_SQLExpression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

- (id)allObjects;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)nextObject;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (id)nextObjectIdenticalTo:(id)arg1;
- (id)nextObjectWithExclusiveAccessToken:(id)arg1;

// Image: /System/Library/PrivateFrameworks/BacklightServices.framework/BacklightServices

- (id)peekingEnumerator;

// Image: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub

- (id)bpsPublisher;

// Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit

- (bool)crk_allObjectsMatchPredicate:(id /* block */)arg1;
- (bool)crk_containsObjectMatchingPredicate:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation

- (id)_cn_compactMap:(id /* block */)arg1;
- (id)_cn_filter:(id /* block */)arg1;
- (id)_cn_flatMap:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation

- (id)ef_SQLExpression;
- (id)ef_SQLIsolatedExpression;
- (void)ef_renderSQLExpressionInto:(id)arg1;
- (void)ef_renderSQLExpressionInto:(id)arg1 conjoiner:(id)arg2;

// Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices

- (id)msv_compactMap:(id /* block */)arg1;
- (id)msv_filter:(id /* block */)arg1;
- (id)msv_firstWhere:(id /* block */)arg1;
- (id)msv_flatMap:(id /* block */)arg1;
- (id)msv_map:(id /* block */)arg1;
- (bool)msv_reduceIntoBool:(bool)arg1 by:(id /* block */)arg2;
- (double)msv_reduceIntoCGFloat:(double)arg1 by:(id /* block */)arg2;
- (double)msv_reduceIntoDouble:(double)arg1 by:(id /* block */)arg2;
- (float)msv_reduceIntoFloat:(float)arg1 by:(id /* block */)arg2;
- (int)msv_reduceIntoInt32:(int)arg1 by:(id /* block */)arg2;
- (long long)msv_reduceIntoInt64:(long long)arg1 by:(id /* block */)arg2;
- (long long)msv_reduceIntoInt:(long long)arg1 by:(id /* block */)arg2;
- (id)msv_reduceIntoObject:(id)arg1 by:(id /* block */)arg2;
- (unsigned int)msv_reduceIntoUInt32:(unsigned int)arg1 by:(id /* block */)arg2;
- (unsigned long long)msv_reduceIntoUInt64:(unsigned long long)arg1 by:(id /* block */)arg2;
- (unsigned long long)msv_reduceIntoUInt:(unsigned long long)arg1 by:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities

- (bool)na_all:(id /* block */)arg1;
- (bool)na_any:(id /* block */)arg1;
- (void)na_each:(id /* block */)arg1;
- (id)na_filter:(id /* block */)arg1;
- (id)na_firstObjectPassingTest:(id /* block */)arg1;
- (id)na_map:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (id)fc_firstObjectPassingTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration

- (id)rc_firstObjectPassingTest:(id /* block */)arg1;

@end
