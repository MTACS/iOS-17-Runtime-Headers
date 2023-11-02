
@interface SXTangierTextRenderCollectorItem : NSObject {
    NSString * _componentIdentifier;
    UIView<TSDRepDirectLayerHosting> * _directLayerHost;
    SXTextTangierFlowInfo * _flowInfo;
    SXTextTangierFlowLayout * _flowLayout;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _flowRange;
    SXTextTangierFlowStorage * _flowStorage;
    SXTextTangierTextLayout * _layout;
    bool  _selectable;
    SXTextTangierStorage * _storage;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;

@end
