
@interface _WKTextInputContext : NSObject <NSCopying> {
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
    }  _textInputContext;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingRect;

- (id).cxx_construct;
- (id)_initWithTextInputContext:(const void*)arg1;
- (const void*)_textInputContext;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRect;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;

@end
