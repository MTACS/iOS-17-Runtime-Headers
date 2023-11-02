
@interface WKTextPlaceholder : UITextPlaceholder {
    struct ElementContext { 
        struct FloatRect { 
            struct FloatPoint { 
                float m_x; 
                float m_y; 
            } m_location; 
            struct FloatSize { 
                float m_width; 
                float m_height; 
            } m_size; 
        } boundingRect; 
        struct ObjectIdentifierGeneric<WebCore::PageIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { 
            unsigned long long m_identifier; 
        } webPageIdentifier; 
        struct ProcessQualified<WTF::UUID> { 
            struct UUID { 
                /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*m_data; 
            } m_object; 
            struct ObjectIdentifierGeneric<WebCore::ProcessIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { 
                unsigned long long m_identifier; 
            } m_processIdentifier; 
        } documentIdentifier; 
        struct ObjectIdentifierGeneric<WebCore::ElementIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { 
            unsigned long long m_identifier; 
        } elementIdentifier; 
    }  _elementContext;
}

@property (nonatomic, readonly) const void*elementContext;

- (id).cxx_construct;
- (const void*)elementContext;
- (id)initWithElementContext:(const void*)arg1;
- (id)rects;

@end
