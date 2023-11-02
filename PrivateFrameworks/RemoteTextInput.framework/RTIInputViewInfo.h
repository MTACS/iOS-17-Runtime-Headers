
@interface RTIInputViewInfo : NSObject <NSCopying, NSSecureCoding> {
    unsigned int  _contextId;
    struct NSEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _insets;
    bool  _shouldShowDockView;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic) unsigned int contextId;
@property (nonatomic) struct NSEdgeInsets { double x1; double x2; double x3; double x4; } insets;
@property (nonatomic) bool shouldShowDockView;
@property (nonatomic) struct CGSize { double x1; double x2; } size;

// Image: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput

+ (bool)supportsSecureCoding;

- (unsigned int)contextId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })insets;
- (bool)isEqual:(id)arg1;
- (void)setContextId:(unsigned int)arg1;
- (void)setInsets:(struct NSEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setShouldShowDockView:(bool)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)shouldShowDockView;
- (struct CGSize { double x1; double x2; })size;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (id)uiRemoteInputViewInfoForProcessId:(int)arg1;

@end
