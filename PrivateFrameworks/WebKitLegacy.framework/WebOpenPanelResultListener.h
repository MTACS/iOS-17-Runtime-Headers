
@interface WebOpenPanelResultListener : NSObject <WebOpenPanelResultListener> {
    struct RefPtr<WebCore::FileChooser, WTF::RawPtrTraits<WebCore::FileChooser>, WTF::DefaultRefDerefTraits<WebCore::FileChooser>> { 
        struct FileChooser {} *m_ptr; 
    }  _chooser;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancel;
- (void)chooseFilename:(id)arg1;
- (void)chooseFilename:(id)arg1 displayString:(id)arg2 iconImage:(struct CGImage { }*)arg3;
- (void)chooseFilenames:(id)arg1;
- (void)chooseFilenames:(id)arg1 displayString:(id)arg2 iconImage:(struct CGImage { }*)arg3;
- (id)initWithChooser:(void*)arg1;

@end
