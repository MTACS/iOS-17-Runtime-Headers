
@interface _WKPrintFormattingAttributes : NSObject {
    struct ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::FrameIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>> { 
        struct ObjectIdentifierGeneric<WebCore::FrameIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { 
            unsigned long long m_identifier; 
        } m_object; 
        struct ObjectIdentifierGeneric<WebCore::ProcessIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { 
            unsigned long long m_identifier; 
        } m_processIdentifier; 
    }  _frameID;
    unsigned long long  _pageCount;
    struct PrintInfo { 
        float pageSetupScaleFactor; 
        float availablePaperWidth; 
        float availablePaperHeight; 
        struct RectEdges<float> { 
            struct array<float, 4UL> { 
                float __elems_[4]; 
            } m_sides; 
        } margin; 
        bool snapshotFirstPage; 
    }  _printInfo;
}

@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::FrameIdentifierType' */ struct  frameID; /* unknown property attribute:  WTF::ObjectIdentifierMainThreadAccessTraits>=Q}} */
@property (nonatomic, readonly) unsigned long long pageCount;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{PrintInfo=fff{RectEdges<float>={array<float' */ struct  printInfo; /* unknown property attribute:  4UL>=[4f]}}B} */

- (id).cxx_construct;
- (struct ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::FrameIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>> { struct ObjectIdentifierGeneric<WebCore::FrameIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long x_1_1_1; } x1; struct ObjectIdentifierGeneric<WebCore::ProcessIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long x_2_1_1; } x2; })frameID;
- (id)initWithPageCount:(unsigned long long)arg1 frameID:(struct ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::FrameIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>> { struct ObjectIdentifierGeneric<WebCore::FrameIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long x_1_1_1; } x1; struct ObjectIdentifierGeneric<WebCore::ProcessIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long x_2_1_1; } x2; })arg2 printInfo:(struct PrintInfo { float x1; float x2; float x3; struct RectEdges<float> { struct array<float, 4UL> { float x_1_2_1[4]; } x_4_1_1; } x4; bool x5; })arg3;
- (unsigned long long)pageCount;
- (struct PrintInfo { float x1; float x2; float x3; struct RectEdges<float> { struct array<float, 4UL> { float x_1_2_1[4]; } x_4_1_1; } x4; bool x5; })printInfo;

@end
