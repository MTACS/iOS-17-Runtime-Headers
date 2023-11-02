
@interface UIApplicationShortcutIcon : NSObject <BSXPCCoding, NSCopying> {
    SBSApplicationShortcutIcon * _sbsShortcutIcon;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBSApplicationShortcutIcon *sbsShortcutIcon;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)iconWithCustomImage:(id)arg1;
+ (id)iconWithCustomImage:(id)arg1 isTemplate:(bool)arg2;
+ (id)iconWithSystemImageName:(id)arg1;
+ (id)iconWithTemplateImageName:(id)arg1;
+ (id)iconWithType:(long long)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)initWithSBSApplicationShortcutIcon:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)sbsShortcutIcon;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

+ (id)iconWithContact:(id)arg1;

@end
