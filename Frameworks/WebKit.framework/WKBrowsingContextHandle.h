
@interface WKBrowsingContextHandle : NSObject <NSCopying, NSSecureCoding> {
    struct ObjectIdentifierGeneric<WebKit::WebPageProxyIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { 
        unsigned long long m_identifier; 
    }  _pageProxyID;
    unsigned long long  _webPageID;
}

@property (getter=_pageProxyID, nonatomic, readonly) /* Warning: unhandled struct encoding: '{ObjectIdentifierGeneric<WebKit::WebPageProxyIdentifierType' */ struct  pageProxyID; /* unknown property attribute:  WTF::ObjectIdentifierMainThreadAccessTraits>=Q} */
@property (getter=_webPageID, nonatomic, readonly) unsigned long long webPageID;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (id)_initWithPage:(struct NakedRef<WebKit::WebPage> { struct WebPage {} *x1; })arg1;
- (id)_initWithPageProxy:(struct NakedRef<WebKit::WebPageProxy> { struct WebPageProxy {} *x1; })arg1;
- (id)_initWithPageProxyID:(struct ObjectIdentifierGeneric<WebKit::WebPageProxyIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long x1; })arg1 andWebPageID:(struct ObjectIdentifierGeneric<WebCore::PageIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long x1; })arg2;
- (struct ObjectIdentifierGeneric<WebKit::WebPageProxyIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long x1; })_pageProxyID;
- (unsigned long long)_webPageID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
