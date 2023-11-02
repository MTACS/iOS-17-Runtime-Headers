
@interface AVTUIStickerItem : NSObject <AVTDiscardableContent> {
    UIImage * _cachedImage;
    MSSticker * _cachedMSSticker;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _clippingRect;
    bool  _hasBeenRendered;
    NSString * _identifier;
    NSString * _localizedName;
    id /* block */  _resourceProvider;
    id /* block */  discardableContentHandler;
}

@property (nonatomic, retain) UIImage *cachedImage;
@property (nonatomic, retain) MSSticker *cachedMSSticker;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } clippingRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ discardableContentHandler;
@property (nonatomic) bool hasBeenRendered;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (nonatomic, readonly, copy) id /* block */ resourceProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cachedImage;
- (id)cachedMSSticker;
- (void)clearCachedItems;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clippingRect;
- (id)description;
- (void)discardContent;
- (id /* block */)discardableContentHandler;
- (bool)hasBeenRendered;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 localizedName:(id)arg2 resourceProvider:(id /* block */)arg3;
- (id)localizedName;
- (id /* block */)resourceProvider;
- (void)setCachedImage:(id)arg1;
- (void)setCachedMSSticker:(id)arg1;
- (void)setClippingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDiscardableContentHandler:(id /* block */)arg1;
- (void)setHasBeenRendered:(bool)arg1;

@end
