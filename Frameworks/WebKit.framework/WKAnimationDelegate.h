
@interface WKAnimationDelegate : NSObject <CAAnimationDelegate> {
    struct ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::PlatformLayerIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>> { 
        struct ObjectIdentifierGeneric<WebCore::PlatformLayerIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { 
            unsigned long long m_identifier; 
        } m_object; 
        struct ObjectIdentifierGeneric<WebCore::ProcessIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { 
            unsigned long long m_identifier; 
        } m_processIdentifier; 
    }  _layerID;
    void * _layerTreeHost;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)initWithLayerID:(struct ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::PlatformLayerIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>> { struct ObjectIdentifierGeneric<WebCore::PlatformLayerIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long x_1_1_1; } x1; struct ObjectIdentifierGeneric<WebCore::ProcessIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long x_2_1_1; } x2; })arg1 layerTreeHost:(void*)arg2;
- (void)invalidate;

@end
