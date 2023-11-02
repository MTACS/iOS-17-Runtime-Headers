
@interface WBSWebExtensionContextMenuContext : NSObject {
    long long  _category;
    bool  _editable;
    long long  _elementMediaType;
    NSUUID * _extensionIdentifier;
    NSNumber * _frameID;
    NSURL * _frameURL;
    NSURL * _linkURL;
    NSURL * _pageURL;
    NSString * _selectedText;
    bool  _shouldCollapseMultipleTopLevelItems;
    bool  _shouldMatchAllVisibleItems;
    NSURL * _srcURL;
    double  _tabID;
    long long  _topLevelItemLimit;
}

@property (nonatomic, readonly) long long category;
@property (nonatomic, readonly) bool editable;
@property (nonatomic, readonly) long long elementMediaType;
@property (nonatomic, readonly) NSUUID *extensionIdentifier;
@property (nonatomic, readonly) NSNumber *frameID;
@property (nonatomic, readonly) NSURL *frameURL;
@property (getter=isInSubframe, nonatomic, readonly) bool inSubframe;
@property (getter=isLink, nonatomic, readonly) bool link;
@property (nonatomic, readonly) NSURL *linkURL;
@property (nonatomic, readonly) NSURL *pageURL;
@property (nonatomic, readonly, copy) NSString *selectedText;
@property (nonatomic, readonly) bool shouldCollapseMultipleTopLevelItems;
@property (nonatomic, readonly) bool shouldMatchAllVisibleItems;
@property (nonatomic, readonly) NSURL *srcURL;
@property (nonatomic, readonly) double tabID;
@property (nonatomic, readonly) long long topLevelItemLimit;

+ (id)contextForActionContextMenuWithExtensionIdentifier:(id)arg1 tabID:(double)arg2;
+ (id)contextForBrowserActionContextMenuWithExtensionIdentifier:(id)arg1 tabID:(double)arg2;
+ (id)contextForPageActionContextMenuWithExtensionIdentifier:(id)arg1 tabID:(double)arg2;
+ (id)contextForWebContentContextMenuInTabID:(double)arg1 frameID:(id)arg2 mediaType:(long long)arg3 linkURL:(id)arg4 srcURL:(id)arg5 pageURL:(id)arg6 frameURL:(id)arg7 isEditable:(bool)arg8 selectedText:(id)arg9;
+ (id)contextMatchingAllVisibleItems;

- (void).cxx_destruct;
- (long long)category;
- (bool)editable;
- (long long)elementMediaType;
- (id)extensionIdentifier;
- (id)frameID;
- (id)frameURL;
- (id)init;
- (bool)isInSubframe;
- (bool)isLink;
- (id)linkURL;
- (id)pageURL;
- (id)selectedText;
- (bool)shouldCollapseMultipleTopLevelItems;
- (bool)shouldMatchAllVisibleItems;
- (id)srcURL;
- (double)tabID;
- (long long)topLevelItemLimit;

@end
