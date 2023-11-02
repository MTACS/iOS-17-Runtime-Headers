
@interface UISearchToken : NSObject {
    UIImage * _image;
    id  _representedObject;
    NSString * _text;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) id representedObject;
@property (nonatomic, copy) NSString *text;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)tokenWithIcon:(id)arg1 text:(id)arg2;
+ (id)tokenWithImage:(id)arg1;

- (void).cxx_destruct;
- (id)_initToken;
- (id)image;
- (id)representedObject;
- (void)setImage:(id)arg1;
- (void)setRepresentedObject:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_searchTokenWithRepresentedObjectToken:(id)arg1;

@end
