
@interface NSDataAsset : NSObject <NSCopying> {
    CUINamedData * _namedData;
}

@property (readonly, copy) NSData *data;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *typeIdentifier;

// Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation

+ (id)_namedDataPrivateAccessorWithName:(id)arg1 bundle:(id)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 bundle:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)typeIdentifier;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_namedDataPrivateAccessorWithName:(id)arg1 bundle:(id)arg2;

@end
