
@interface CRNMS : NSObject {
    unsigned long long  _forestFeatureType;
    unsigned long long  _outputTextFeatureLevel;
    struct deque<nms::RectForest<unsigned short, double>, std::allocator<nms::RectForest<unsigned short, double>>> { 
        struct __split_buffer<nms::RectForest<unsigned short, double> *, std::allocator<nms::RectForest<unsigned short, double> *>> { 
            void **__first_; 
            void **__begin_; 
            void **__end_; 
            struct __compressed_pair<nms::RectForest<unsigned short, double> **, std::allocator<nms::RectForest<unsigned short, double> *>> { 
                void **__value_; 
            } __end_cap_; 
        } __map_; 
        unsigned long long __start_; 
        struct __compressed_pair<unsigned long, std::allocator<nms::RectForest<unsigned short, double>>> { 
            unsigned long long __value_; 
        } __size_; 
    }  _postNMSForests;
    struct deque<nms::RectForest<unsigned short, double>, std::allocator<nms::RectForest<unsigned short, double>>> { 
        struct __split_buffer<nms::RectForest<unsigned short, double> *, std::allocator<nms::RectForest<unsigned short, double> *>> { 
            void **__first_; 
            void **__begin_; 
            void **__end_; 
            struct __compressed_pair<nms::RectForest<unsigned short, double> **, std::allocator<nms::RectForest<unsigned short, double> *>> { 
                void **__value_; 
            } __end_cap_; 
        } __map_; 
        unsigned long long __start_; 
        struct __compressed_pair<unsigned long, std::allocator<nms::RectForest<unsigned short, double>>> { 
            unsigned long long __value_; 
        } __size_; 
    }  _preNMSForests;
    struct PyramidNMS<unsigned short, double, unsigned char> { 
        int (**_vptr$PyramidNMS)(); 
        struct deque<bool, std::allocator<bool>> { 
            struct __split_buffer<bool *, std::allocator<bool *>> { 
                bool **__first_; 
                bool **__begin_; 
                bool **__end_; 
                struct __compressed_pair<bool **, std::allocator<bool *>> { 
                    bool **__value_; 
                } __end_cap_; 
            } __map_; 
            unsigned long long __start_; 
            struct __compressed_pair<unsigned long, std::allocator<bool>> { 
                unsigned long long __value_; 
            } __size_; 
        } fullySpecifiedForests; 
        struct deque<std::valarray<bool>, std::allocator<std::valarray<bool>>> { 
            struct __split_buffer<std::valarray<bool> *, std::allocator<std::valarray<bool> *>> { 
                void **__first_; 
                void **__begin_; 
                void **__end_; 
                struct __compressed_pair<std::valarray<bool> **, std::allocator<std::valarray<bool> *>> { 
                    void **__value_; 
                } __end_cap_; 
            } __map_; 
            unsigned long long __start_; 
            struct __compressed_pair<unsigned long, std::allocator<std::valarray<bool>>> { 
                unsigned long long __value_; 
            } __size_; 
        } masksValid; 
        struct deque<std::valarray<bool>, std::allocator<std::valarray<bool>>> { 
            struct __split_buffer<std::valarray<bool> *, std::allocator<std::valarray<bool> *>> { 
                void **__first_; 
                void **__begin_; 
                void **__end_; 
                struct __compressed_pair<std::valarray<bool> **, std::allocator<std::valarray<bool> *>> { 
                    void **__value_; 
                } __end_cap_; 
            } __map_; 
            unsigned long long __start_; 
            struct __compressed_pair<unsigned long, std::allocator<std::valarray<bool>>> { 
                unsigned long long __value_; 
            } __size_; 
        } masksInvalid; 
        struct deque<std::valarray<bool>, std::allocator<std::valarray<bool>>> { 
            struct __split_buffer<std::valarray<bool> *, std::allocator<std::valarray<bool> *>> { 
                void **__first_; 
                void **__begin_; 
                void **__end_; 
                struct __compressed_pair<std::valarray<bool> **, std::allocator<std::valarray<bool> *>> { 
                    void **__value_; 
                } __end_cap_; 
            } __map_; 
            unsigned long long __start_; 
            struct __compressed_pair<unsigned long, std::allocator<std::valarray<bool>>> { 
                unsigned long long __value_; 
            } __size_; 
        } masksPendingInvalid; 
        struct deque<std::valarray<unsigned char>, std::allocator<std::valarray<unsigned char>>> { 
            struct __split_buffer<std::valarray<unsigned char> *, std::allocator<std::valarray<unsigned char> *>> { 
                void **__first_; 
                void **__begin_; 
                void **__end_; 
                struct __compressed_pair<std::valarray<unsigned char> **, std::allocator<std::valarray<unsigned char> *>> { 
                    void **__value_; 
                } __end_cap_; 
            } __map_; 
            unsigned long long __start_; 
            struct __compressed_pair<unsigned long, std::allocator<std::valarray<unsigned char>>> { 
                unsigned long long __value_; 
            } __size_; 
        } histsWordCoincide; 
        struct deque<std::deque<std::deque<std::deque<unsigned short>>>, std::allocator<std::deque<std::deque<std::deque<unsigned short>>>>> { 
            struct __split_buffer<std::deque<std::deque<std::deque<unsigned short>>> *, std::allocator<std::deque<std::deque<std::deque<unsigned short>>> *>> { 
                void **__first_; 
                void **__begin_; 
                void **__end_; 
                struct __compressed_pair<std::deque<std::deque<std::deque<unsigned short>>> **, std::allocator<std::deque<std::deque<std::deque<unsigned short>>> *>> { 
                    void **__value_; 
                } __end_cap_; 
            } __map_; 
            unsigned long long __start_; 
            struct __compressed_pair<unsigned long, std::allocator<std::deque<std::deque<std::deque<unsigned short>>>>> { 
                unsigned long long __value_; 
            } __size_; 
        } idxsWordCoincide; 
        struct deque<std::valarray<unsigned char>, std::allocator<std::valarray<unsigned char>>> { 
            struct __split_buffer<std::valarray<unsigned char> *, std::allocator<std::valarray<unsigned char> *>> { 
                void **__first_; 
                void **__begin_; 
                void **__end_; 
                struct __compressed_pair<std::valarray<unsigned char> **, std::allocator<std::valarray<unsigned char> *>> { 
                    void **__value_; 
                } __end_cap_; 
            } __map_; 
            unsigned long long __start_; 
            struct __compressed_pair<unsigned long, std::allocator<std::valarray<unsigned char>>> { 
                unsigned long long __value_; 
            } __size_; 
        } histsWordContain; 
        struct deque<std::deque<std::deque<std::deque<unsigned short>>>, std::allocator<std::deque<std::deque<std::deque<unsigned short>>>>> { 
            struct __split_buffer<std::deque<std::deque<std::deque<unsigned short>>> *, std::allocator<std::deque<std::deque<std::deque<unsigned short>>> *>> { 
                void **__first_; 
                void **__begin_; 
                void **__end_; 
                struct __compressed_pair<std::deque<std::deque<std::deque<unsigned short>>> **, std::allocator<std::deque<std::deque<std::deque<unsigned short>>> *>> { 
                    void **__value_; 
                } __end_cap_; 
            } __map_; 
            unsigned long long __start_; 
            struct __compressed_pair<unsigned long, std::allocator<std::deque<std::deque<std::deque<unsigned short>>>>> { 
                unsigned long long __value_; 
            } __size_; 
        } idxsWordContain; 
        struct deque<std::valarray<unsigned char>, std::allocator<std::valarray<unsigned char>>> { 
            struct __split_buffer<std::valarray<unsigned char> *, std::allocator<std::valarray<unsigned char> *>> { 
                void **__first_; 
                void **__begin_; 
                void **__end_; 
                struct __compressed_pair<std::valarray<unsigned char> **, std::allocator<std::valarray<unsigned char> *>> { 
                    void **__value_; 
                } __end_cap_; 
            } __map_; 
            unsigned long long __start_; 
            struct __compressed_pair<unsigned long, std::allocator<std::valarray<unsigned char>>> { 
                unsigned long long __value_; 
            } __size_; 
        } histsWordConstitute; 
        struct deque<std::deque<std::deque<std::deque<unsigned short>>>, std::allocator<std::deque<std::deque<std::deque<unsigned short>>>>> { 
            struct __split_buffer<std::deque<std::deque<std::deque<unsigned short>>> *, std::allocator<std::deque<std::deque<std::deque<unsigned short>>> *>> { 
                void **__first_; 
                void **__begin_; 
                void **__end_; 
                struct __compressed_pair<std::deque<std::deque<std::deque<unsigned short>>> **, std::allocator<std::deque<std::deque<std::deque<unsigned short>>> *>> { 
                    void **__value_; 
                } __end_cap_; 
            } __map_; 
            unsigned long long __start_; 
            struct __compressed_pair<unsigned long, std::allocator<std::deque<std::deque<std::deque<unsigned short>>>>> { 
                unsigned long long __value_; 
            } __size_; 
        } idxsWordConstitute; 
        struct deque<std::valarray<unsigned char>, std::allocator<std::valarray<unsigned char>>> { 
            struct __split_buffer<std::valarray<unsigned char> *, std::allocator<std::valarray<unsigned char> *>> { 
                void **__first_; 
                void **__begin_; 
                void **__end_; 
                struct __compressed_pair<std::valarray<unsigned char> **, std::allocator<std::valarray<unsigned char> *>> { 
                    void **__value_; 
                } __end_cap_; 
            } __map_; 
            unsigned long long __start_; 
            struct __compressed_pair<unsigned long, std::allocator<std::valarray<unsigned char>>> { 
                unsigned long long __value_; 
            } __size_; 
        } histsWordOverlap; 
        struct deque<std::deque<std::deque<std::deque<unsigned short>>>, std::allocator<std::deque<std::deque<std::deque<unsigned short>>>>> { 
            struct __split_buffer<std::deque<std::deque<std::deque<unsigned short>>> *, std::allocator<std::deque<std::deque<std::deque<unsigned short>>> *>> { 
                void **__first_; 
                void **__begin_; 
                void **__end_; 
                struct __compressed_pair<std::deque<std::deque<std::deque<unsigned short>>> **, std::allocator<std::deque<std::deque<std::deque<unsigned short>>> *>> { 
                    void **__value_; 
                } __end_cap_; 
            } __map_; 
            unsigned long long __start_; 
            struct __compressed_pair<unsigned long, std::allocator<std::deque<std::deque<std::deque<unsigned short>>>>> { 
                unsigned long long __value_; 
            } __size_; 
        } idxsWordOverlap; 
        struct deque<std::valarray<unsigned char>, std::allocator<std::valarray<unsigned char>>> { 
            struct __split_buffer<std::valarray<unsigned char> *, std::allocator<std::valarray<unsigned char> *>> { 
                void **__first_; 
                void **__begin_; 
                void **__end_; 
                struct __compressed_pair<std::valarray<unsigned char> **, std::allocator<std::valarray<unsigned char> *>> { 
                    void **__value_; 
                } __end_cap_; 
            } __map_; 
            unsigned long long __start_; 
            struct __compressed_pair<unsigned long, std::allocator<std::valarray<unsigned char>>> { 
                unsigned long long __value_; 
            } __size_; 
        } histsLineCoincide; 
        struct deque<std::deque<std::deque<std::deque<unsigned short>>>, std::allocator<std::deque<std::deque<std::deque<unsigned short>>>>> { 
            struct __split_buffer<std::deque<std::deque<std::deque<unsigned short>>> *, std::allocator<std::deque<std::deque<std::deque<unsigned short>>> *>> { 
                void **__first_; 
                void **__begin_; 
                void **__end_; 
                struct __compressed_pair<std::deque<std::deque<std::deque<unsigned short>>> **, std::allocator<std::deque<std::deque<std::deque<unsigned short>>> *>> { 
                    void **__value_; 
                } __end_cap_; 
            } __map_; 
            unsigned long long __start_; 
            struct __compressed_pair<unsigned long, std::allocator<std::deque<std::deque<std::deque<unsigned short>>>>> { 
                unsigned long long __value_; 
            } __size_; 
        } idxsLineCoincide; 
        struct deque<std::valarray<unsigned char>, std::allocator<std::valarray<unsigned char>>> { 
            struct __split_buffer<std::valarray<unsigned char> *, std::allocator<std::valarray<unsigned char> *>> { 
                void **__first_; 
                void **__begin_; 
                void **__end_; 
                struct __compressed_pair<std::valarray<unsigned char> **, std::allocator<std::valarray<unsigned char> *>> { 
                    void **__value_; 
                } __end_cap_; 
            } __map_; 
            unsigned long long __start_; 
            struct __compressed_pair<unsigned long, std::allocator<std::valarray<unsigned char>>> { 
                unsigned long long __value_; 
            } __size_; 
        } histsLineContain; 
        struct deque<std::deque<std::deque<std::deque<unsigned short>>>, std::allocator<std::deque<std::deque<std::deque<unsigned short>>>>> { 
            struct __split_buffer<std::deque<std::deque<std::deque<unsigned short>>> *, std::allocator<std::deque<std::deque<std::deque<unsigned short>>> *>> { 
                void **__first_; 
                void **__begin_; 
                void **__end_; 
                struct __compressed_pair<std::deque<std::deque<std::deque<unsigned short>>> **, std::allocator<std::deque<std::deque<std::deque<unsigned short>>> *>> { 
                    void **__value_; 
                } __end_cap_; 
            } __map_; 
            unsigned long long __start_; 
            struct __compressed_pair<unsigned long, std::allocator<std::deque<std::deque<std::deque<unsigned short>>>>> { 
                unsigned long long __value_; 
            } __size_; 
        } idxsLineContain; 
        struct deque<std::valarray<unsigned char>, std::allocator<std::valarray<unsigned char>>> { 
            struct __split_buffer<std::valarray<unsigned char> *, std::allocator<std::valarray<unsigned char> *>> { 
                void **__first_; 
                void **__begin_; 
                void **__end_; 
                struct __compressed_pair<std::valarray<unsigned char> **, std::allocator<std::valarray<unsigned char> *>> { 
                    void **__value_; 
                } __end_cap_; 
            } __map_; 
            unsigned long long __start_; 
            struct __compressed_pair<unsigned long, std::allocator<std::valarray<unsigned char>>> { 
                unsigned long long __value_; 
            } __size_; 
        } histsLineConstitute; 
        struct deque<std::deque<std::deque<std::deque<unsigned short>>>, std::allocator<std::deque<std::deque<std::deque<unsigned short>>>>> { 
            struct __split_buffer<std::deque<std::deque<std::deque<unsigned short>>> *, std::allocator<std::deque<std::deque<std::deque<unsigned short>>> *>> { 
                void **__first_; 
                void **__begin_; 
                void **__end_; 
                struct __compressed_pair<std::deque<std::deque<std::deque<unsigned short>>> **, std::allocator<std::deque<std::deque<std::deque<unsigned short>>> *>> { 
                    void **__value_; 
                } __end_cap_; 
            } __map_; 
            unsigned long long __start_; 
            struct __compressed_pair<unsigned long, std::allocator<std::deque<std::deque<std::deque<unsigned short>>>>> { 
                unsigned long long __value_; 
            } __size_; 
        } idxsLineConstitute; 
        struct deque<std::valarray<unsigned char>, std::allocator<std::valarray<unsigned char>>> { 
            struct __split_buffer<std::valarray<unsigned char> *, std::allocator<std::valarray<unsigned char> *>> { 
                void **__first_; 
                void **__begin_; 
                void **__end_; 
                struct __compressed_pair<std::valarray<unsigned char> **, std::allocator<std::valarray<unsigned char> *>> { 
                    void **__value_; 
                } __end_cap_; 
            } __map_; 
            unsigned long long __start_; 
            struct __compressed_pair<unsigned long, std::allocator<std::valarray<unsigned char>>> { 
                unsigned long long __value_; 
            } __size_; 
        } histsLineOverlap; 
        struct deque<std::deque<std::deque<std::deque<unsigned short>>>, std::allocator<std::deque<std::deque<std::deque<unsigned short>>>>> { 
            struct __split_buffer<std::deque<std::deque<std::deque<unsigned short>>> *, std::allocator<std::deque<std::deque<std::deque<unsigned short>>> *>> { 
                void **__first_; 
                void **__begin_; 
                void **__end_; 
                struct __compressed_pair<std::deque<std::deque<std::deque<unsigned short>>> **, std::allocator<std::deque<std::deque<std::deque<unsigned short>>> *>> { 
                    void **__value_; 
                } __end_cap_; 
            } __map_; 
            unsigned long long __start_; 
            struct __compressed_pair<unsigned long, std::allocator<std::deque<std::deque<std::deque<unsigned short>>>>> { 
                unsigned long long __value_; 
            } __size_; 
        } idxsLineOverlap; 
        void *pForests; 
        struct PyramidNMSConfig { 
            int (**_vptr$PyramidNMSConfig)(); 
            unsigned long long methodType; 
            unsigned long long scoreType; 
            double scoreMinThreshold; 
            unsigned char scoreMapMinThreshold; 
            bool scoreUseScaleIndex; 
            bool scoreUseArea; 
            double scoreAggregationScalingFactor; 
            bool scoreUseNumSubDatums; 
            unsigned long long scoreNumSubDatumsUpperClip; 
            unsigned long long scoreNumSubDatumsLowerClip; 
            bool ignoreOrphansInFullTile; 
            double heightRatioMinThresholdForContainment; 
            bool computeIntrascaleGeometricRelationships; 
            unsigned long long intersectionNumSamples; 
            double iouMinThresholdToAcceptContainedDatum; 
            double normalizedAreaMinThresholdToAcceptContainedDatum; 
            bool pendingInvalidRejectCompetingDatums; 
            bool computeAndFilterByIndividualScores; 
            bool processCoincidence; 
            bool processContainment; 
            bool processOverlap; 
            bool processPendingInvalid; 
            unsigned long long favorSubDatumUndersegmentationInProcessingCoincidence; 
            bool favorLargerAreaInProcessingCoincidence; 
            bool favorFineScaleInProcessingCoincidence; 
            double datumMinHeightRatioToUseFullTile; 
            bool useOverlappingWordsInProcessingContainment; 
            double minValidCosAngleInDistributionCheckInProcessingContainment; 
            unsigned long long favorSubDatumUndersegmentationInProcessingContainment; 
            bool favorLargerAreaInProcessingContainment; 
            bool favorFullTileInProcessingContainment; 
            double heightRatioFineToFullMinThresholdFavorFullTileInProcessingContainment; 
            double heightRatioFineToFullMaxThresholdFavorFullTileInProcessingContainment; 
            double widthRatioFineToFullMinThresholdFavorFullTileInProcessingContainment; 
            double widthRatioFineToFullMaxThresholdFavorFullTileInProcessingContainment; 
            double heightRatioFineToFullMinThresholdFavorFullTileInProcessingSingleConstituentContainment; 
            double heightRatioFineToFullMaxThresholdFavorFullTileInProcessingSingleConstituentContainment; 
            double widthRatioFineToFullMinThresholdFavorFullTileInProcessingSingleConstituentContainment; 
            double widthRatioFineToFullMaxThresholdFavorFullTileInProcessingSingleConstituentContainment; 
            double favorFullTileInProcessingOverlap; 
            double coincidenceIOUMinThreshold; 
            double coincidenceIOMinMinThreshold; 
            double containmentIOUMaxThreshold; 
            double containmentIOMinMinThreshold; 
            double constitutionIOUMaxThreshold; 
            double constitutionIOMinMinThreshold; 
            double overlapIOUMinThreshold; 
            double overlapIOUMaxThreshold; 
            double overlapIOMinMinThreshold; 
            double overlapIOMinMaxThreshold; 
        } config; 
    }  _pyrNMS;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)addTextDetectorQuadFeatures:(const void*)arg1 withInputSize:(struct CGSize { double x1; double x2; })arg2 andScoreMap:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg3 options:(id)arg4;
- (bool)addTextDetectorQuadFeatures:(const void*)arg1 withInputSize:(struct CGSize { double x1; double x2; })arg2 scoreMap:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg3 andScoreMapScaleFactor:(double)arg4 options:(id)arg5;
- (bool)addTextDetectorQuadFeatures:(const void*)arg1 withInputSize:(struct CGSize { double x1; double x2; })arg2 scoreMap:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg3 scoreMapScaleFactor:(double)arg4 andTileRects:(id)arg5 options:(id)arg6;
- (bool)buildRectForest:(void*)arg1 fromTextDetectorQuadFeatures:(const void*)arg2 forestFeatureType:(unsigned long long)arg3 withInputSize:(struct CGSize { double x1; double x2; })arg4 scoreMap:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg5 andScoreMapScaleFactor:(double)arg6 options:(id)arg7;
- (bool)buildRectForest:(void*)arg1 fromTextDetectorQuadFeatures:(const void*)arg2 forestFeatureType:(unsigned long long)arg3 withInputSize:(struct CGSize { double x1; double x2; })arg4 scoreMap:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg5 scoreMapScaleFactor:(double)arg6 andTileRects:(id)arg7 options:(id)arg8;
- (id)buildTextFeaturesFromRectForest:(const void*)arg1 byEdge:(unsigned long long)arg2 options:(id)arg3;
- (unsigned long long)convertSubTextFeatures:(id)arg1 toRects:(void*)arg2;
- (void)fillRectForestDatum:(void*)arg1 asDimType:(unsigned long long)arg2 withCGRect:(const struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (void)fillRectForestDatum:(void*)arg1 asDimType:(unsigned long long)arg2 withCRTextDetectorQuad:(const void*)arg3 andInputSize:(struct CGSize { double x1; double x2; })arg4;
- (void)fillRectForestDatum:(void*)arg1 asDimType:(unsigned long long)arg2 withQuad:(const void*)arg3 andDimType:(unsigned long long)arg4;
- (void)fillTextFeature:(id)arg1 withRectDatum:(const void*)arg2;
- (id)generateConsolidatedTextFeatures:(id)arg1;
- (id)generateConsolidatedTextFeatures:(id)arg1 withScaleIds:(void*)arg2;
- (id)getTextFeatureFromQuadAngleDatum:(const void*)arg1;
- (id)initForRevision:(unsigned long long)arg1;
- (id)initWithNMSMethodType:(unsigned long long)arg1 NMSScoreType:(unsigned long long)arg2;
- (bool)preprocessScoreMaps;

@end
